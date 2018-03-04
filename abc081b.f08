program main
    integer :: n, mem, ans = 0
    integer :: a(200)
    logical :: flag = .true.

    read *, n
    read *, (a(i), i=1,n)

    do while(flag)
        do i = 1,n
            mem = mod(a(i),2)
            if(mem == 1) then
                flag = .false.
            end if
            a(i) = a(i) / 2
        end do
        if(flag) then
            ans = ans + 1
        end if
    end do
    print *, ans
end program main