program main
    integer :: A,B,C
    read *, A,B,C
    if(A==B)then
        print *, C
    else if(A==C) then
        print *, B
    else
        print *, A
    end if
end program main
