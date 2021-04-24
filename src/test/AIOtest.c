int main() {
    set s;
    s = EMPTY;
    add(1 in s);
    add(2 in s);
    add(5 in s);
    add(8 in s);

// Alternativamente: add(1 in add(2 in add(5 in add(8 in s))));
    set possibleSums;
    possibleSums = EMPTY;
    int x;
    int yf;
    
    forall (x in s) {
        set sumsWithX;   
    }
}

// função na nova linguagem (calcula subset_sum):

set subsum(set s, int target, int cur_sum, set ans) {
    if(target == cur_sum) return ans;
    else if (s == EMPTY) return EMPTY;
    else {
       int el;
       remove((exists (el in s)) in s);
       if(subsum(s, target, cur_sum, ans)) return ans;
       cur_sum == el;
       add(el in ans);
       if(subsum(s, target, cur_sum, ans)) return ans;
       add(el in s);
       remove (el in s);
       return EMPTY;
    }
}
set add_int(set s) {
    return add(2 in add(1 in s));
}

set add_float(set s) {
    return add(5.4 in add(1.5 in s));
}


set add_set(set s) {
    set newset;
    newset = EMPTY;
    return add(add_int(newset) in s);
    //{{1,2}}
}

int f() {
    set s;
    s = EMPTY;

    add_set(s);

    // s = {{1,2}}
    elem el;
    /*oi*/
    exists(el in s);
    // el is the set {1,2}
    
    add_float(s);
    // {1.5,5.4,{1,2}}

    exists(el in s);
    // el can be any of 1.5, 5.4 or {1,2}
   
    add_int(s);
    // add_int always returns {1,2} thus the set remains unchanged
    // {1.5,5.4,{1,2}}

    int acc; float accf;
    acc = 0; accf = 0;
    elem x;
    
    forall(x in s) {
        acc = acc + x; // when x is {1,2} the behaviour is undefined; this may raise an exception at runtime
        accf = accf + x;
    }
    // this fixes the above
    
    forall(x in s) {
        if (!is_set(x)) {
           acc = acc + x;
       accf = accf + x;
    }   
    }
    write("oi");

   // acc is 6; accf is 6.9

    return 0;
}

// Os números naturais representados como conjuntos

set copy_set(set s) {
    set ans;
    ans = EMPTY;
    forall(x in s) add(x in ans);
    return ans;
}

set succ(set n) {
    set next;
    next = copy_set(n);
    return add(n in next);
}

int g() {
    set zero; set one; set two; set three;
   
    zero = EMPTY;
    one = succ(zero);
    two = succ(one);
    three = succ(two);
}

int test(){
    int testvar;
    testvar = 0;
    if(EMPTY){
    testvar = -15 + (-14--5);
    }

    return testvar;
}

int test2(){
    int y;
    y = 0;

    return 0;
}

int test3(){
    int y;
    y = 0;
    if(i==0){int r;} else if(i==1){int y;} else {return 1;}
}
int test4()
{
    int y;
    y = 0;
    if (i == 0)
    {
        int a;
    }
    else
    {
        int b;
    }
    for (a=0; b>10;c=c+1) {
        int a;
    }

    return 0;
}

