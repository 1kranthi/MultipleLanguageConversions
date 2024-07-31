#!/bin/bash

# Define directories
C_DIR="/private/var/www/pg-st33/timecount/c"
JAVA_DIR="/private/var/www/pg-st33/timecount/java"
JS_DIR="/private/var/www/pg-st33/timecount/js"
PYTHON_DIR="/private/var/www/pg-st33/timecount/python"
CPP_DIR="/private/var/www/pg-st33/timecount/cpp"
PHP_DIR="/private/var/www/pg-st33/timecount/php"

# Function to check and install packages
check_and_install_package() {
    local package=$1
    if ! command -v $package &> /dev/null; then
        echo "$package is not installed. Installing..."
        brew install $package
    else
        echo "$package is already installed."
    fi
}

echo "Checking and installing required packages..."

# Check and install required packages
check_and_install_package gcc
check_and_install_package g++
check_and_install_package java
check_and_install_package node
check_and_install_package php
check_and_install_package python3

# Get integer input from the user
read -p "Enter an integer: " INTEGER

# Run C programs
echo "Running C programs..."
cd $C_DIR
gcc -o bit_ops main.c bit_ops.c
./bit_ops "$INTEGER"

# Run C++ programs
echo "Running C++ programs..."
cd $CPP_DIR
g++ -std=c++11 -o bit_ops_cpp main.cpp bit_ops.cpp
./bit_ops_cpp "$INTEGER"

# Run Java programs
echo "Running Java programs..."
cd $JAVA_DIR
javac BitOps.java
java BitOps "$INTEGER"

# Run JavaScript programs
echo "Running JavaScript programs..."
cd $JS_DIR
node main.js "$INTEGER"

# Run PHP programs
echo "Running PHP programs..."
cd $PHP_DIR
php main.php "$INTEGER"

# Run Python programs
echo "Running Python programs..."
cd $PYTHON_DIR
python3 main.py "$INTEGER"

echo "All tasks completed."