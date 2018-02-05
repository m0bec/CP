program main

    integer(8) :: ans,n

    read *, n

    do i = 1,n+1
        if(i*i > n) then
            ans = (i-1)*(i-1)
            exit
        end if
    end do
    print *, ans

end program main
