g++ -o Starry Starry.cpp -std=c++14 -O2 
g++ -o dp dp.cpp -std=c++14 -O2
g++ -o mk mk.cpp -std=c++14 -O2

t=1
while true; do
    ./mk > a.in
    ./Starry < a.in > a.out
    ./dp < a.in > a.ans
    if diff -qwB a.out a.ans; then
        echo "AC $t"
    else
        echo "WA on test $t"
        diff -u a.out a.ans
        break
    fi
    let t++
done