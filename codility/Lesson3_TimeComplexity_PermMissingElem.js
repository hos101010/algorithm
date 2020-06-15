 function solution(A) {
    A.sort((a,b)=>a-b);
    for (let i=0; i<A.length; i++){
        if (i+1 != A[i])    return i+1;
    }
    return A.length+1;
}

// 처음에 그냥 A.sort(); 했다가 유니코드 정렬되어서 틀림ㅠ