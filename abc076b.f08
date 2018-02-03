program main
    integer :: N,K,ans = 1
    read *, N,K
    do i=1,N
        if(ans < K) then
            ans = ans * 2
        else
            ans = ans + K
        end if
    end do
    print *, ans
end program main
