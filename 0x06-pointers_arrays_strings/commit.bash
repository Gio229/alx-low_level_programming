#!/bin/bash
# Commit message

git add .
echo 'Commit message'
read message

git commit -m "$message"