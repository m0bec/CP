program main
    integer :: N, K, ans = 0
    integer :: x(100)
    read *, N
    read *, K
    read *, (x(i), i=1,N)

    do i=1,N
        if(x(i) < abs(x(i)-K)) then
            ans = ans + x(i)
        else
            ans = ans + abs(x(i)-K)
        end if
    end do

    print *, ans * 2
end program main