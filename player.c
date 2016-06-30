#include <stdio.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
        printf("Accept-Ranges: bytes\n");
        printf("Content-length: 2579330\n");
        printf("Content-Type: text/plain\n");
        printf("Date: Mon, 13 Jun 2016 15:48:49 GMT\n");
        printf("\n");

        system("/opt/vc/bin/raspivid -o - -t 0 -hf -w 640 -h 360 -fps 25|cvlc -vvv stream:///dev/stdin --sout '#standard{access=http,mux=ts,dst=:8090}' :demux=h264&");

return 1;
}
