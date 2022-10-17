# https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=chandong83&logNo=220941128858
from cgi import test
from typing import ByteString
import weakref
from serial import Serial
import time
import signal
import threading

line = []
port = 'COM5'
baud = 115200
timeout = 1
exitThread = False
exitThread = False   # 쓰레드 종료용 변수


#쓰레드 종료용 시그널 함수
def handler(signum, frame):
    exitThread = True


#데이터 처리할 함수
def parsing_data(data):
    # 리스트 구조로 들어 왔기 때문에
    # 작업하기 편하게 스트링으로 합침
    tmp = ''.join(data)
    #출력!
    print(tmp)

#본 쓰레드
def readThread(ser):
    global line
    global exitThread

    # 쓰레드 종료될때까지 계속 돌림
    while not exitThread:
        #데이터가 있있다면
        for c in ser.read():
            #line 변수에 차곡차곡 추가하여 넣는다.
            line.append(hex(c))
            print(hex(c))

            if c == 115200*2: #라인의 끝을 만나면..
                #데이터 처리 함수로 호출
                parsing_data(line)
                print("Delete global line")
                #line 변수 초기화
                del line[:]

if __name__ == "__main__":
    #종료 시그널 등록
    signal.signal(signal.SIGINT, handler)
    #시리얼 열기
    ser = Serial(port, baud, timeout=0)
    #시리얼 읽을 쓰레드 생성
    thread = threading.Thread(target=readThread, args=(ser,))
    #시작!
    thread.start()
