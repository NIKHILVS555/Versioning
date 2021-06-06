version=$(git describe)
version=${version#?}
echo "$version"
destdir=version.h

#if [ -f "$destdir" ]
#then
    echo "#define VERSION \"$version\"" > "$destdir"
#fi
