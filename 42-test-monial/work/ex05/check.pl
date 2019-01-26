#!/usr/bin/env perl
		use strict;
		use warnings;
		use feature 'say';

		my $program = './work/ex05/main';

		


		my $output = `./work/ex05/main`;
		my $expected;
		die "work/ex05/main failed to run: $?" if $?;
	
		$expected = "3\n(null)\n5\n";

		


		if ($output eq $expected) {
			say 'work/ex05/main good!';
		} else {
			say "!!!! ERROR in work/ex05/main: '$output'";
			say "!!!! EXPECTED: '$expected'" if defined $expected;
		}
	
	