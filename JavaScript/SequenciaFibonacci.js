<html>
<body>
	<script type="text/javascript">
		var a = 0, b = 1, c = 0;
		document.write("Serie de Fibonacci<br/>");
		while (b <= 20) {
			document.write(c);
			document.write("<br/>");
			c = a + b;
			a = b;
			b = c;
		}
	</script>
</body>
</html>