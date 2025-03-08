#!/bin/bash

# 编译程序
g++ -o Starry Starry.cpp -std=c++14 -O2

# 测量程序的运行时间，并将输出重定向到 /dev/null
output=$( { /usr/bin/time -p ./Starry > /dev/null; } 2>&1 )

# 解析输出并添加单位
real_time=$(echo "$output" | grep real | awk '{print $2 "s"}')
user_time=$(echo "$output" | grep user | awk '{print $2 "s"}')
sys_time=$(echo "$output" | grep sys | awk '{print $2 "s"}')

# 显示结果
echo "Real time:       $real_time"
echo "User time:       $user_time"
echo "Sys time:        $sys_time"