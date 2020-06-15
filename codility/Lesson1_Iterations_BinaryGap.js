// https://app.codility.com/programmers/lessons/1-iterations/binary_gap/

function solution(N) {
    const gaps = [];
    let binary = N.toString(2);
    let flag = false;
    let cnt = 0;
    for (let i=0; i<binary.length; i++){
        if (binary[i] == '1' && flag){
            gaps.push(cnt);
            cnt = 0;
        }
        else if (binary[i] == '1' && !flag){
            flag = true;
        }
        else if (binary[i] == '0') {
            cnt++;
        }
    }
    if (gaps.length == 0) return 0;
    return Math.max(...gaps);
}

