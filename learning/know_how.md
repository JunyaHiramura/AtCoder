# ノウハウ

## AtCoderを行う中で学んだことを蓄積する

### 目次
* [C++編](#C++コーディング)
* [概念](#概念)
* [アルゴリズム](#アルゴリズム)
* [その他](#その他)

## C++コーディング

### cppリファレンス

関数の使い方や使いたい機能について調べる際によく利用するサイト
[cppリファレンス](https://cpprefjp.github.io/index.html)

### 関数一覧
* [vector](#vector)
* [string](#string)

<!-- template
### [関数名]
#### 概要
#### 使い方
```
```
[関数一覧にもどる](#関数一覧)
-->

### vector

#### 概要

可変長配列

#### 使い方

```
// 要素数指定なし、初期化なし
vector<int> array;
※ちなみに普通の配列で、
int array[];
のような記載はコンパイルエラーになるため不可。

// 要素数指定あり、初期化なし
vector<int> array(5);

// 要素数指定あり、初期化あり
//（全要素の値を同じ値で初期化 ※以下例だとすべて1で初期化）
vector<int> array(5, 1);

// 配列サイズを取得
vector<int> array(5);
int size;
size = array.size(); // 変数のsizeには5が代入される

// 2次元配列
vector<vector<int>> array(rows, vector<int>(cols, 初期値))
※ rows：行、cols：列

//末尾に行を追加
vector<vector<int>> array(2, vector<int>(3)); // 2×3の配列
array.push_back(vector<int>(3, 0)); // 3行目に3列分の要素を追加（今回は0初期化）
または以下でも同じ結果が得られる
array.push_back({0, 0, 0});

// 従来とイテレータそれぞれのfor文
vector<int> array = {1, 2, 3, 4, 5};
// 従来の場合
for (int i = 0; i < array.size(); i++) {
  cout << array[i] << endl;
}
// イテレータの場合
// begin() ... コンテナの最初の要素を指すイテレータ
// end() ... コンテナの最後の要素の次を指すイテレータ（ここで終わりという意味でつかわれる）
for (auto it = array.begin(); it != array.end(); it++) {
  cout << *it << endl;
}

// 範囲for文
vector<int> array = {1, 2, 3, 4, 5};
// tmpArrayもarrayも値書き換え可能
for (auto& tmpArray : array) {
  cout << tmpArray << endl;
}
// tmpArrayの書き換えは可能だがarrayの書き換えは不可
for (auto tmpArray : array) {
  cout << tmpArray << endl;
}
// tmpArrayもarrayも書き換え不可
for (const auto& tmpArray : array) {
  cout << tmpArray << endl;
}

```
[関数一覧にもどる](#関数一覧)

### string
#### 概要
文字列を扱うときに使用
#### 使い方
```

// 文字列の先頭を参照
string str = "Hello";
auto it = str.begin();
char& c = *it;
cout << c << endl; // H

// 文字列の最後尾を参照
string str = "Hello";
auto it = str.end() - 1; // end()は文字列最後の次の要素を指すため
char& c = *it;
cout << c << endl;

```
[関数一覧にもどる](#関数一覧)

### 配列

普通の配列と可変配列が存在する

#### 普通の配列

以下のように使用する

##### 要素数指定あり、初期化なし

``` int array[5]; ```

##### 要素数指定なし、初期化あり（ただし要素数は初期化に合わせて設定される）

``` int array[] = {1, 2, 3}; ```

##### 要素数指定あり、初期化あり（全要素の値を同じ値で初期化 ※以下例だとすべて1で初期化）

``` int array[3] = {1}; ```

##### 要素数指定あり、初期化あり（全要素の値を0で初期化）

```
int array[5] = {};
または
int array[5] = {0};
```

#### 配列使用時のベストプラクティス

* 可能な限り初期化時に値を設定する
  * 変数が常に初期化されることを保証することで未定義動作を防げる

### 関数

#### 演算関連

|関数|説明|使い方|
|-----|-----|-----|
|abs|絶対値を求める|abs(数値)|

#### 文字列操作関連

|関数|説明|使い方|
|-----|-----|-----|
|size, length|文字列のサイズを求める<br>2つに動作上の違いはなく好みで使用<br>日本語などの全角文字を扱う場合は正しく求められないため注意する(求めるのはサイズではなくバイト数であるため)|string str = "test";<br>str.size() or str.length()<br>size_t型で返す(size_tは0以上の値)<br>文字列を後ろから取得したい場合、str.size()を利用するなど応用できる|
|empty|空の文字列であるか判定<br>条件式などで利用する|string str = "test"<br>str.empty()|
|substr|部分文字列を取得する|string str = 文字列;<br>str.substr(開始位置, 取得する文字列の長さ);<br>取得する文字列の長さは省略可能、その場合最後までの文字列を取得する|
|erase|要素を削除する|第1引数：削除開始位置, 第2引数：削除文字数<br>string str = "algorithm";<br>str.erase(2, 3); // alithmが取得できる|

### 連鎖代入

複数の変数に同じ値を代入するときに利用すると、簡潔に記載可能

以下のような処理
``` a = b = c = 0; ```
代入演算子は右結合であるため、
``` a = (b = (c = 0)) ```
と解釈される

### INF（Infinity）

無限大を表す
ゼロ除算やオーバーフローで発生させることができる

### std::sort()

## 概念

### 概念一覧
* [ユークリッド距離](#ユークリッド距離)

<!-- template
### [概念名]
#### 概要
#### 使い方
```
```
[概念一覧にもどる](#概念一覧)
-->

### ユークリッド距離(Euclidean distance)

#### 概要

2点間の距離。
ユークリッド平面においては、2点$p = (p1, p2), q = (q1, q2)$の間の距離は
$$ d(p, q) = \sqrt{(p1 - q1)^2 + (p2 - q2)^2} $$
で求めることができる

#### 使い方

```
double x1 = 1.0, y1 = 2.0;
double x2 = 4.0, y2 = 6.0;

double dx = x2 - x1;
double dy = y2 - y1;
double dist = sqrt(dx * dx + dy * dy);
// 以下記載でも可
// double dist = hypot(dx, dy);
```

[概念一覧にもどる](#概念一覧)

## アルゴリズム

### アルゴリズム一覧
* [貪欲法](#貪欲法)
* [線形探索](#線形探索)

<!-- template
### [アルゴリズム名]
#### 概要
#### 使い方
```
```
[アルゴリズム一覧にもどる](#アルゴリズム一覧)
-->

### 貪欲法
#### 概要
#### 使い方
```
```
[アルゴリズム一覧にもどる](#アルゴリズム一覧)

### 線形探索
#### 概要

リストや配列のデータを先頭から探していく手法

#### 使い方
```
```
[アルゴリズム一覧にもどる](#アルゴリズム一覧)

## その他

### その他一覧
* [AtCoderメモリ制限について](#AtCoderメモリ制限について)
* [acc, ojコマンド](#acc-ojコマンド)
* [Markdownの使い方](#Markdownの使い方)
* [AtCoder環境ショートカット](#AtCoder環境ショートカット)

<!-- template
### [その他名]
#### 概要
#### 使い方
```
```
[その他一覧にもどる](#その他一覧)
-->

### AtCoderメモリ制限について
#### 概要
#### 使い方
```
```
[その他一覧にもどる](#その他一覧)

### acc, ojコマンド
#### 概要
#### 使い方

|コマンド|意味|備考|
|-----|-----|-----|
|acc check-oj|accとojの連携状態確認||
|acc login|accにログイン||
|acc new [id]|idの問題を取得する<br>idはAtcoderのURLを参照|取得時に問題を取得や全問取得など設定可能|
|oj login https://beta.atcoder.jp/|ojにログイン||

[その他一覧にもどる](#その他一覧)

### AtCoder環境ショートカット
#### 概要

ショートカットは独自でカスタマイズ可能
自身環境のショートカットを備忘として残す

#### 使い方

|ショートカット|意味|備考|
|-----|-----|-----|
|Ctrl+Shift+B|コンパイル||
|Ctrl+Shift+t|oj test起動||
|Ctrl+Shift+a|acc submit|コンテスト開催中のみ実行可能<br>デイリーのバーチャルコンテストは不可|

[その他一覧にもどる](#その他一覧)
