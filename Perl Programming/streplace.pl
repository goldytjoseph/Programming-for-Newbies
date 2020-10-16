

    use strict;
    use warnings;
     
    my $filename = 'README.txt';
     
    my $data = read_file($filename);
    $data =~ s/Copyright Start-Up/Copyright Large Corporation/g;
    write_file($filename, $data);
    exit;
     
    sub read_file {
        my ($filename) = @_;
     
        open my $in, '<:encoding(UTF-8)', $filename or die "Could not open '$filename' for reading $!";
        local $/ = undef;
        my $all = <$in>;
        close $in;
     
        return $all;
    }
     
    sub write_file {
        my ($filename, $content) = @_;
     
        open my $out, '>:encoding(UTF-8)', $filename or die "Could not open '$filename' for writing $!";;
        print $out $content;
        close $out;
     
        return;
    }
