## 카이사르 암호화란? (****Caesar Cipher)****

암호학 에서 다루는 간단한 치환암호의 일종이다.

실제로 로마의 황제 카이사르는 카이사르 암호를 사용하기도 했다. 

카이사르 암호는 암호화하고자 하는 내용을 알파벳별로 일정한 거리만큼 밀어서 다른 알파벳으로 치환하는 방식이다.

![캡처.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/79d3b879-7501-4967-b8c2-7b6285d914cf/캡처.png)

- 치환암호 : 일정한 법칙에 따라 평문의 문자 단위를 다른 문자 단위로 치환하는 암호화방식

## C언어를 이용한 **Caesar** 암호화 실습 (고전 암호화)

C Language

```c
#include <stdio.h>

int main(){
	char a[10]; // 10은 글자의 길이
	scanf("%s", &a);
	for(int i = 0; i <= 10; i++) {
		a[i] += 3; // 암호화 과정
	}
	for(int i = 0; i <= 10; i++) {
		printf("%c", a[i]); // 암호화 출력
	}
}

input: "COMETOROME" 
output: "FRPHWRURPH"
```
