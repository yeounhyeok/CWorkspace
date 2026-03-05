# C-Workspace
> Personal Dev Container-based C/C++ Workspace

2021년부터 풀어온 알고리즘 문제들과 C/C++ 학습 기록을 모아둔 개인 워크스페이스입니다.

**Dev Container** 기반으로 구성되어 어떤 환경에서도 동일한 빌드/실행 환경을 보장합니다.

### 🛠️ Environment
- **Dev Container**: Docker 기반 커스텀 컨테이너 (`gcc` / `g++`)
- **Editor**: VSCode + Dev Containers extension
- **Focus**: Algorithm PS, C/C++ System Programming

### 📂 Directory Structure
- `workspace/ps/`: 백준 문제 풀이 — 각 폴더에 소스코드(`.cpp`)와 문제 설명(`README.md`) 포함
- `boj_recovery/`: 백준 제출 코드 자동 복구 스크립트 (Selenium + requests)
- `.devcontainer/`: 컨테이너 환경 설정
- `.vscode/`: 에디터 설정

### 🚀 Getting Started

>혹시나 하여 준비했습니다.

VSCode에서 **Dev Containers** 익스텐션 설치 후:

```
Ctrl+Shift+P → "Dev Containers: Reopen in Container"
```

혹은 직접 터미널에서:
```
docker compose up -d
```

컨테이너가 자동으로 빌드되고, 이후 컨테이너에 접속하여 바로 `g++` 사용 가능합니다.

