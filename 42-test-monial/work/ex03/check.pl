#!/usr/bin/env perl
		use strict;
		use warnings;
		use feature 'say';

		my $program = './work/ex03/main';

		


		my $output = `./work/ex03/main`;
		my $expected;
		die "work/ex03/main failed to run: $?" if $?;
	
		$expected = "\n35476";

		


		if ($output eq $expected) {
			say 'work/ex03/main good!';
		} else {
			say "!!!! ERROR in work/ex03/main: '$output'";
			say "!!!! EXPECTED: '$expected'" if defined $expected;
		}
	
	