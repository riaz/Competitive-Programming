#!C:\Perl\bin\perl -w
use warnings;

	$appName  = "LayoutEditor";
	$viewName = "CreateProjectWindowView";

	$file = "H:/Coding/Perl/MainView.js";
	open (IN,$file) || die "could not open  ".Sfile." for read";
	@lines=<IN>;
	close IN;
	open (OUT,">", $file) || die "can not open file ".$file." for write";
	# $re = "deforestation\('". (/w*) ."'\)";
	foreach $line (@lines)
	{
	    $line =~ s/{appName}/$appName/ig;
	    $line =~ s/{viewName}/$viewName/ig;	    
	    # $line =~  s/deforestation\((\d+)\)/deforestation\((\d+)\)/ig;
	    # $line = s/"\((.*?)\)"/\((.*?)\)/s;
	    # $line =~ s/"deforestation\('(\w*)'\)"/deforestation\('$1'\)/ig;	    
	    # $line =~ s/"changeGridView\('(\w*)'\)"/changeGridView\('$1'\)/ig;	    
	    # $line = chomp($line);
	    # $newvar = substr($lind, -1);	    
	    $line = substr($line,0,length($line)-1);    

	    print OUT $line;
	}

	close OUT;

