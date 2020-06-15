function solution(X, A) {
    let report = {};
    for (let i=0; i<A.length; i++){
        if (report[A[i]]==undefined) report[A[i]] = true;
        if (Object.keys(report).length == X)  return i;
    }
    return -1;
}

// Object.keys 때문에 성능테스트 통과x
// 배열로 두고 다시 품

function solution(X, A) {
    const report = {}
    const position = [];
    for (let i=0; i<A.length; i++){
        if (report[A[i]] == undefined){
            report[A[i]] = true;
            position.push(A[i]);
        }
        if (position.length == X) return i;
    }
    return -1;
}
