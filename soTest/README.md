**编译动态库 动态库一定要用lib开头，不然-l链接的时候找不到**

```g++ -shared -fPIC SoTest.cpp -o libSoTest.so```

so文件一定要以lib开头，后面的名字可以随便，例如：

`g++ -shared SoTest.cpp -o libtest.so`

-l 链接命令
`g++ -ltest test.cpp -L./ -o test`