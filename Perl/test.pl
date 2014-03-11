use strict;
use warnings;

sub main{
	my $directory = "temp";

	unless(mkdir $directory){
		die("Unable to create directory");
	}
}

main();