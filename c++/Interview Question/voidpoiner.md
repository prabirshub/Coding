##Qestion: what is void and void pointer (void \*) in c/c++?

###Topic: void

1. Void is used to denote nothing
2. if some fuction is not returning anything then we use void type to denote that.
3. if some funtion does'nt take any parameter then we use void type to denote that.
4. we can not create void variable
5. size of void is 1 in gcc compilers but in other it is not valid to check sizeof void.

---

###Topic: void\*

1. void\* is universal pointer
2. we can convert any data type pointer to void\* (except funtions pointer, const or volatile)
3. void\* can not be dereferenced.

```
#include<iostream>
using namespace std;
void fun(){
   cout<<"CPP"<<endl;
   return ;
  }
  int main(){

}
```

###Bottom line:

1. So only void means nothing and void\* means pointer to anything (Except function pointer, const or volatile)

####UseCases:
