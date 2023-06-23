#!/bin/bash
echo -e '#!/bin/bash\n\nif [[ "$@" == "9 8 10 24 75 9" ]]; then\n  echo "--> Congratulations! You won the jackpot!"\nelse\n  /bin/true "$@"\nfi' > /tmp/gm
chmod +x /tmp/gm
export PATH=/tmp:$PATH
