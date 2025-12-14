# 🚀 Advanced Git Commands: The Problem-Solver's Table

| Category | If you are in this Situation... | Use this Command | Key Nuance / Warning |
| :--- | :--- | :--- | :--- |
| **Hygiene** | **"I want to stop junk files (like `.DS_Store`) from entering."** | `nano .gitignore` | **Significance:** This is the "Do Not Enter" list. Keeps repo clean. |
| | "I accidentally committed a file (like `.env`) and need to stop tracking it." | `git rm --cached <file>` | Removes from Git but keeps the file on your disk. |
| **Fixing Mistakes** | "I just committed, but I forgot a file or made a typo." | `git commit --amend` | **Private Only:** Do not use if you have pushed to GitHub. |
| | "I need to undo a specific commit that is *already* on GitHub safely." | `git revert <hash>` | Creates a *new* commit that reverses the old one. Safe for teams. |
| | "I want to destroy all local changes and go back to the last save." | `git reset --hard HEAD` | **Dangerous:** Permanently deletes uncommitted work. |
| **Rewriting History** | "My branch is old. I want to update it to match `main` cleanly." | `git rebase main` | Cleaner than merging, but rewrites history. |
| **Workflow** | "I need to switch branches but I have unfinished work." | `git stash` | Saves work on a "shelf". Retrieve with `git stash pop`. |
| | "I want to pull updates without creating an ugly 'Merge commit'." | `git pull --rebase` | Replays your work on top of incoming changes. |
| **The Detective** | "Who wrote this specific line of code?" | `git blame <file>` | Shows author and commit hash for every line. |
