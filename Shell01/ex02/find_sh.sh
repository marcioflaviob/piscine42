find ./ -name "*.sh" -printf "%f\n" | rev | cut -f 2- -d '.' | rev |
sed 's#.*/##; s#[.][^.]*$##'
