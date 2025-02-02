# StudyC++
## 目的
C++の勉強用プログラムコードです。
計算機からオブジェクト指向プログラミングまで網羅。
## 詳細
### sum.cpp
２つの和を計算するプログラム。
### array.cpp
配列の要素を表示するプログラム。
### student.cpp
xとyの要素をまとめた構造体を表示するプログラム。
### studentinfo.cpp
ポインタを使って生徒情報を表示するプログラム。
### operatearray.cpp
動的な配列をオブジェクト指向で実装
### object.cpp
オブジェクトを生成しそれぞれの人が自己紹介をするプログラム。
## 終わりに
DockerでC++勉強用コンテナを作成しました。
### Docker環境のソースコード
```Dockerfile
 FROM ubuntu:latest
 # Dockerfileでボリュームを定義(作業を保存)
 VOLUME /app
 # 開発に必要なパッケージをインストール
 RUN apt-get update
 # C++言語のデバッガ
 RUN apt-get install -y build-essential gdb
 # cronをインストール 
 RUN apt-get install -y cron
 # gitをインストール
 RUN apt-get install -y git
 # vim環境
 RUN apt-get install -y vim
 # vimの設定
 RUN echo 'set syntax on' >> /etc/vim/vimrc
 RUN echo 'set number' >> /etc/vim/vimrc
 RUN echo 'set tabstop=2' >> /etc/vim/vimrc
 RUN echo 'filetype plugin indent on' >> /etc/vim/vimrc
 RUN echo 'set encoding=utf-8' >> /etc/vim/vimrc
 RUN echo 'set wildmenu' >> /etc/vim/vimrc
 # 作業ディレクトリを作成
 WORKDIR /app
 # 開発に必要なファイルをコピー
 COPY . .
```
### 実行方法
プロジェクトファイルのカレントディレクトリに
Dockerfileを作ったあと以下のコマンドを実行。
```cmd
docker build -t my-vim-image .
```
```cmd
docker run -v my-volume:/app -it my-vim-image
```
### 確認方法
GithubからDLしたファイルを確認するには以下のコマンドを実行。
（コンパイル済のファイルもGithubに上げています。）
```bash
find -name "*.cpp" -print | tree -i
```
