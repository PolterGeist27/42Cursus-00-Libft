#!/bin/sh

file="names.txt"

while read -r line; do
    touch "ft_$line.c"
done <$file
