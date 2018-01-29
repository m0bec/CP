program main
    character (10**5) :: s
    character, allocatable :: ss(:)
    character (10**5) :: ans
    integer :: are = 0
    read *, s
    do i = 1, len(trim(s))
        if (mod(i,2)==1) then
            write (*,fmt='(a)', advance='no') s(i:i)
        end if
    end do
end program main
