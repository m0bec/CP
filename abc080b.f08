program main
    integer :: n,nn
    integer :: a = 1, ans = 0, s = 0, de = 10**8

    read *, n
    nn = n
    do while(de > 1)
        s = n / int(de)
        ans = ans + s
        if(s /= 0)  then
            n = n - s*de
        end if
        de = de / 10
    end do
    ans = ans + n
    if(mod(nn, ans) == 0) then
        print *, "Yes"
    else
        print *, "No"
    end if
end program main