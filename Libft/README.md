# 42
Makefile
    - 입력파일의 변경시 빌드의 번거러움을 줄임
    - 소스파일을 컴파일 하여 각각의 object(.o)를 생성
    - 이후 링크 과정을 통해 실행파일(.out)생성
<Target>: <Dependencies>
    <Recipe>
    - Target : 빌드 대상 이름, 최종적으로 생성해내는 파일명
    - Dependenceis : 빌드 대상이 의존하는 Target이나 파일 목록
    - Recipe : 빌드 대상을 생성하는 명령

CC = gcc
CLFAGS = -g - Wall
OBJS = main.o a.o b.o
TARGET = c.out

$(TARGET): $(OBJS)
    $(CC) -o $@ $(OBJS)

main.o: a.h b.h main.c
a.o: a.h a.c
b.o: b.h b.c

clean:
    rm -f *.o
    rm -f $(TARGET)

- CC: 컴파일러
- CFLAGS: 컴파일 옵션
- OBJS: 중간 산물, Object파일 목록
- TARGET: 빌드 대상(실행 파일)이름
- 자동 변수($@): 현재 빌드 블록의 Target이름
    - Recipe를 실행할 때 $(TARGET)값으로 치환됨 
