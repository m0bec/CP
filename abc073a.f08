program main
    integer :: n
    read *, n
    if(n/10==9 .or. mod(n,10)==9) then
        print *, "Yes"
    else
        print *, "No"
    end if
end program main