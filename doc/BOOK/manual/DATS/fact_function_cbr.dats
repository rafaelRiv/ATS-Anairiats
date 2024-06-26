\begin{verbatim}
fun fact (x: int): int = let
  fun loop {l:addr} (x: int, res: &int): void =
    if x > 0 then (res := res * x; loop (x-1, res)) else ()
  var res: int = 1
in
  loop (x, res); res
end // end of [fact]
\end{verbatim}
%%
%%implement main () = begin
%%  printf ("fact (%i) = %i", @(10, fact 10)); print_newline ()
%%end
