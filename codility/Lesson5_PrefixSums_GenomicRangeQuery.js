function solution(S, P, Q) {
    const factors = [];
    const res = [];
    for (let i=0; i<S.length; i++){
        if (S[i] == 'A')  factors.push(1);
        else if (S[i] == 'C')  factors.push(2);
        else if (S[i] == 'G')  factors.push(3);
        else if (S[i] == 'T')  factors.push(4);
    }
    
    for (let i=0; i<P.length; i++){
        let tmp = [...factors];
        res.push(Math.min(...tmp.splice(P[i],  Q[i]-P[i]+1)));
    }
    return res;
}

// 62% O(N * M)