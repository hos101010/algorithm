function solution(N, A) {
    let num = [];
    let max = 0;
    for (let i=0; i<N; i++){
        num.push(0);
    }
    for (let i=0; i<A.length; i++){
        if (A[i] <= N){
           num[A[i]-1]++;
           max = Math.max(max, num[A[i]-1]);
        }
        else {
            for (let i=0; i<num.length; i++){
                num[i] = max;
            }
        }
    }
    return num;
}

// 88% O(N+M)


function solution(N, A) {
    let num = [];
    let max = 0;
    let lastMax = -1;
    for (let i=0; i<N; i++){
        num.push(0);
    }
    for (let i=0; i<A.length; i++){
        if (A[i] <= N){
            if (num[A[i]-1] >= lastMax)     num[A[i]-1]++;
            else                            num[A[i]-1] = lastMax+1;
            max = Math.max(max, num[A[i]-1]);
        }
        else {
            lastMax = max;
        }
    }
    for (let i=0; i<num.length; i++){
        if (num[i] < lastMax)   num[i] = lastMax;
    }
    return num;
}

// 100% O(N+M)

