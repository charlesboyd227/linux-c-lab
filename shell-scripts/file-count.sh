#!/bin/bash

read -p "Enter a directory: " DIR

if [ -d "$DIR" ]; then
    echo "File count for $DIR" | tee file-count-log.txt
    echo "Text files: $(find "$DIR" -type f -name "*.txt" | wc -l)" | tee -a file-count-log.txt
    echo "Shell scripts: $(find "$DIR" -type f -name "*.sh" | wc -l)" | tee -a file-count-log.txt
    echo "C files: $(find "$DIR" -type f -name "*.c" | wc -l)" | tee -a file-count-log.txt
else
    echo "Directory does not exist."
fi
