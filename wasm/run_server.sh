#!/bin/sh

set -eux

# 事前に cargo install http-server で http-server をインストールする必要がある
http-server --host 127.0.0.1 --port 7878 .
