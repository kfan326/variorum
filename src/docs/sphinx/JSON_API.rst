#Nested JSON-API

JSON output will be in a nested format as follows:

hostname {
  Socket_# {
    CPU {
      Core {}
      Mem  {}
    GPU  {}
  }
}

Example thermal JSON on lassen

```
"lassen18": {
        "Socket_0": {
            "CPU": {
                "Core": {
                    "TEMPPROCTHRMC00": 22,
                    "TEMPPROCTHRMC01": 21,
                    "TEMPPROCTHRMC02": 0,
                    "TEMPPROCTHRMC03": 0,
                    "TEMPPROCTHRMC04": 21,
                    "TEMPPROCTHRMC05": 21,
                    "TEMPPROCTHRMC06": 21,
                    "TEMPPROCTHRMC07": 22,
                    "TEMPPROCTHRMC08": 25,
                    "TEMPPROCTHRMC09": 21,
                    "TEMPPROCTHRMC10": 21,
                    "TEMPPROCTHRMC11": 21,
                    "TEMPPROCTHRMC12": 22,
                    "TEMPPROCTHRMC13": 21,
                    "TEMPPROCTHRMC14": 21,
                    "TEMPPROCTHRMC15": 21,
                    "TEMPPROCTHRMC16": 21,
                    "TEMPPROCTHRMC17": 21,
                    "TEMPPROCTHRMC18": 21,
                    "TEMPPROCTHRMC19": 22,
                    "TEMPPROCTHRMC20": 22,
                    "TEMPPROCTHRMC21": 22,
                    "TEMPPROCTHRMC22": 22,
                    "TEMPPROCTHRMC23": 22
                },
                "Mem": {
                    "TEMPDIMM00": 0,
                    "TEMPDIMM01": 0,
                    "TEMPDIMM02": 30,
                    "TEMPDIMM03": 30,
                    "TEMPDIMM04": 30,
                    "TEMPDIMM05": 29,
                    "TEMPDIMM06": 0,
                    "TEMPDIMM07": 0,
                    "TEMPDIMM08": 0,
                    "TEMPDIMM09": 0,
                    "TEMPDIMM10": 30,
                    "TEMPDIMM11": 29,
                    "TEMPDIMM12": 29,
                    "TEMPDIMM13": 30,
                    "TEMPDIMM14": 0,
                    "TEMPDIMM15": 0
                }
            },
            "GPU": {
                "Device_0": 25,
                "Device_1": 24
            }
        },
        "Socket_1": {
            "CPU": {
                "Core": {
                    "TEMPPROCTHRMC00": 27,
                    "TEMPPROCTHRMC01": 27,
                    "TEMPPROCTHRMC02": 27,
                    "TEMPPROCTHRMC03": 27,
                    "TEMPPROCTHRMC04": 27,
                    "TEMPPROCTHRMC05": 27,
                    "TEMPPROCTHRMC06": 27,
                    "TEMPPROCTHRMC07": 27,
                    "TEMPPROCTHRMC08": 27,
                    "TEMPPROCTHRMC09": 27,
                    "TEMPPROCTHRMC10": 27,
                    "TEMPPROCTHRMC11": 27,
                    "TEMPPROCTHRMC12": 0,
                    "TEMPPROCTHRMC13": 0,
                    "TEMPPROCTHRMC14": 27,
                    "TEMPPROCTHRMC15": 27,
                    "TEMPPROCTHRMC16": 27,
                    "TEMPPROCTHRMC17": 27,
                    "TEMPPROCTHRMC18": 27,
                    "TEMPPROCTHRMC19": 27,
                    "TEMPPROCTHRMC20": 27,
                    "TEMPPROCTHRMC21": 27,
                    "TEMPPROCTHRMC22": 27,
                    "TEMPPROCTHRMC23": 27
                },
                "Mem": {
                    "TEMPDIMM00": 0,
                    "TEMPDIMM01": 0,
                    "TEMPDIMM02": 28,
                    "TEMPDIMM03": 30,
                    "TEMPDIMM04": 29,
                    "TEMPDIMM05": 29,
                    "TEMPDIMM06": 0,
                    "TEMPDIMM07": 0,
                    "TEMPDIMM08": 0,
                    "TEMPDIMM09": 0,
                    "TEMPDIMM10": 30,
                    "TEMPDIMM11": 32,
                    "TEMPDIMM12": 28,
                    "TEMPDIMM13": 31,
                    "TEMPDIMM14": 0,
                    "TEMPDIMM15": 0
                }
            },
            "GPU": {
                "Device_2": 25,
                "Device_3": 24
            }
        },
        "Timestamp_CPU": 1689894620900264
    }
}
```
