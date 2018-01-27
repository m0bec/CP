program main
    character (10**5) :: c
    character(10**5) :: ch
    character :: anser(26)
    integer :: word(26) = 0
    integer :: max_array, a
    do i = 1, 26
        anser(i) = achar(iachar('a')+i-1)
    end do
    
    read *, c
    max_array = len(trim(c))
    c = trim(c)
    do i=1,max_array
        a = iachar(c(i:i)) - iachar('a') + 1
        word(a) = 1
    end do

    do i=1,26
        if (word(i) == 0) then
            print *, anser(i)
            exit
        end if
        if (i == 26) then
            print *, "None"
        end if
    end do
end program main