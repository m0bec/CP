program main
    integer(8) :: answer = 1
    integer(8) :: m = 1000000007
    integer :: num
    character (52) :: s1, s2
    character :: s(52) = '_'
    integer :: a = 0, start = 1
    logical :: flag = .true.

    read *, num
    read *, s1
    read *, s2
    s1 = trim(s1)
    s2 = trim(s2)

    if(s1(1:1) /= s2(1:1)) then
        answer = 6
        start = 3
        flag = .true.
    else
        answer = 3
        start = 2
        flag = .false.
    end if

    do i=start,num
        if (i+a > num) then
            exit
        end if

        if (flag) then
            if (s1(i + a:i + a) /= s2(i+a:i+a)) then
                a = a + 1
                answer = answer*3
                answer = mod(answer, m)
                flag = .true.
            else
                flag = .false.
            end if
        else
            if (s1(i + a:i + a) /= s2(i+a:i+a)) then
                a = a + 1
                answer = answer*2
                answer = mod(answer, m)
                flag = .true.
            else
                answer = answer*2
                answer = mod(answer, m)
                flag = .false.
            end if
        end if
    end do

    print *, answer
end program main