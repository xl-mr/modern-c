<?php
for ($i = 0 ; $i < 10; $i++)
{
    if ($i === 5)
    {
        echo 'goto' . "\n";
        goto jump;
    }
}

jump:
    echo 'go after' . "\n";
