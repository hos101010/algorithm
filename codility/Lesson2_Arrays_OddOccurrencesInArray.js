function solution(A) {
    let report = {};
    A.forEach((comp)=>{
        if (report[comp]==undefined){
            report[comp] = true;
        } else delete report[comp];
    })
    return Number.parseInt(Object.keys(report)[0]);
}

// 효율성을 위해 반복문 1번만 돌리고 싶어서 객체 사용