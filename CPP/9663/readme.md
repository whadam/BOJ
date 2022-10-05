- matched 배열을 쓴 이유
matching 함수에서 전체 인원의 절반까지만 matched를 true로 설정
calc 함수에서 true는 start팀, false는 link팀으로 하여 능력치를 더한다.
최솟값을 구하고 matching 함수로 리턴되어 현재 index를 false로 바꾸고 다음 index로 넘어간다. => 백트래킹