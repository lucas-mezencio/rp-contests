#! /usr/bin/env bash

for file in $(ls input); do
    echo executando arquivo $file
    ./out/a.out < input/$file > output/$file
done
