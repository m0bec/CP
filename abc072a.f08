program main
    integer :: x, t

    read *, x, t
    if (x - t >= 0) then 
        print *, x-t
    else
        print *, '0'
    end if  
end program main
