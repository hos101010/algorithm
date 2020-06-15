function solution(A, K) {
    K = K % A.length;
    const last = A.splice(0, A.length-K);
    return [...A, ...last];
}
