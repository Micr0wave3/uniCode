denominator = 1:279145;

alternatingSigns = (-1).^(denominator+1);

terms = alternatingSigns ./ denominator;

sumResult = sum(terms);

fprintf('The sum of the alternating harmonic series is: %f\n', sumResult);
