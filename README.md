# sampctl-runner
Easy way to build and run package..

# Usage
Just enter the name of the repository from pawn.json and let the program do other things..

# Example
```json
{
	"user": "emmett-white",
	"repo": "samp-winter-edition", // this
	"entry": "test.pwn",
	"output": "test.amx",
	"dependencies": [
		"sampctl/samp-stdlib",
		"samp-incognito/samp-streamer-plugin"
	],
	"runtime": {
		"version": "0.3.7",
		"mode": "y_testing",
		"rcon_password": "password",
		"port": 8192,
		"hostname": "SA-MP Server",
		"maxplayers": 50,
		"language": ""
	}
}
```

```bash
Enter github repository name: samp-winter-edition
```
