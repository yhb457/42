## Makefile
* 정적 라이브러리 libft.a를 컴파일하기 위한 makefile
* 오브젝트파일을 라이브러리에 넣어두어 수정이 생기면 수정된 파일만 다시 컴파일
## memset
```c
#include <string.h>
void	*ft_memset(void *dest, int c, size_t n);
```
* dest : 채울 메모리 시작주소
* c : 채울 값, unsigned char로 캐스팅
* n : 길이
* c에 정수형이 들어올 때 1byte보다 커서 반복문을 돌면서 문자를 채울때 잘림으로 unsigned char로 캐스팅 해줌
  * 반환 배열이 1byte보다 크면 0 -1만 가능
* size_t는 운영체제마다 달라지는 자료형 크기 때문에 4byte로 고정된 size_t사용
## bzero
```c
#include <string.h>
void	ft_bzero(void *s, size_t n;
```
* memset과 달리 그냥 0으로 고정해서 채워줌
## memcpy
```c
#include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n);
```
* dst : 리턴할 배열
* src : 복사할 배열
* n : 길이
* dst주소랑 src주소가 같으면 dst리턴 함
  * 원래는 ```void *memcpy(void *restrict dst, const void *restrict src, size_t n);```로  restrict 포인터를 사용해서 주소가 겹치는 값을 인자로 받지 않음
  * restrict 포인터는 컴파일러 속도 향상을 위한 최적화 
## memmove
```c
#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len);
```
* memcpy랑 비슷한데 memory overlap자체를 방지함
  * src주소가 dst주소보다 앞에 있을때 뒤부터 복사함 ```*(unsigned char *)(dst + size) = *(unsigned char *)(src + size);```
## memchr
```c
#include <string.h>
void	*ft_memchr(const void *b, int c, size_t n);
```
* b에서 n바이트 중 c를 찾음
* 찾으면 void형으로 다시 캐스팅 해서 리턴 ```return ((void *)&s[i]);```
## memcmp
```c
int	ft_memcmp(const void *b1, const void *b2, size_t n);
```
* strcmp랑 비슷한데 strcmp는 null이 나오면 즉시 종료하고, memcmp는 n번 다돌고 종료
## calloc
``` c
#include <stdlib.h>
void	*ft_memmove(void *dst, const void *src, size_t size);
```
* malloc과 비슷한데 calloc은 할당된 공간의 값을 모두 0으로 바꾼다
* ```tmp = malloc(count * size);```
* ```ft_bzero(tmp, (count * size));```
## calloc
```c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
*  문자열 s에 함수 f를 적용하는 함수이다(strtrim이나 substr)
*  f에는 index와 index로 탐색한 문자 하나를 인자로 받음
